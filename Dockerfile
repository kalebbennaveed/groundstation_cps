FROM ros:galactic

ARG DEBIAN_FRONTEND=noninteractive

SHELL ["/usr/bin/bash", "-c"]

RUN apt-get update && \
  apt-get install -y --no-install-recommends \
  vim \
  tmux \
  wget \ 
  tree \
  clang-format \
  curl \ 
  clang \
  cmake \
  build-essential \
  g++ \
  ca-certificates

RUN 

# install vimplug
RUN curl -fLo ~/.vim/autoload/plug.vim --create-dirs \
    https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim

# rviz and gui dependencies
RUN apt-get install -y \
  ros-${ROS_DISTRO}-rviz2 \ 
  qt5-default \ 
  libboost-all-dev \
  libcanberra-gtk-module

# image transport
RUN apt-get install -y \ 
  ros-${ROS_DISTRO}-image-transport \
  ros-${ROS_DISTRO}-compressed-image-transport \
  ros-${ROS_DISTRO}-theora-image-transport \ 
  ros-${ROS_DISTRO}-rqt-common-plugins


## install vicon receiver
WORKDIR /root/colcon_ws/src
RUN git clone https://github.com/dasc-lab/ros2-vicon-receiver.git
WORKDIR /root/colcon_ws/src/ros2-vicon-receiver
RUN ./install_libs.sh

## install python tf utils
RUN apt-get update && apt-get install python3-pip -y --no-install-recommends
RUN pip3 install transforms3d

# install pcl
RUN apt-get install -y --no-install-recommends ros-${ROS_DISTRO}-pcl-ros 

# install realsense
RUN apt-get install -y --no-install-recommends ros-${ROS_DISTRO}-realsense2-*

# install fastdds
RUN apt-get install -y ros-${ROS_DISTRO}-rmw-fastrtps-cpp

# install osqp
RUN pip3 install --upgrade numpy scipy osqp

# install ros joy
RUN apt-get update && apt-get install -y ros-${ROS_DISTRO}-joy

# install tf2-geometry-msgs
RUN apt-get update && apt-get install -y ros-${ROS_DISTRO}-tf2-geometry-msgs

# install python requirements from dependencies
# RUN pip3 install -r py_requirements.txt


# install the vimrc
#COPY vimrc /root/.vimrc
#RUN vim -E -s -u "$HOME/.vimrc" +PlugInstall +qall

# default locations
RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> /root/.bashrc
RUN echo "source /root/colcon_ws/install/setup.bash" >> /root/.bashrc

# # Install Julia
# WORKDIR /root/julia_install/
# COPY deps/install.jl .
# RUN wget https://julialang-s3.julialang.org/bin/linux/x64/1.11/julia-1.11.1-linux-x86_64.tar.gz && tar zxvf julia-1.11.1-linux-x86_64.tar.gz
# RUN echo PATH="\$PATH:/root/julia_install/julia-1.11.1/bin" >> ~/.bashrc
# RUN /root/julia_install/julia-1.11.1/bin/julia install.jl
# # Set environment variable for JuliaCall to offline mode
# ENV PYTHON_JULIAPKG_EXE=/root/julia_install/julia-1.11.1/bin/julia
# ENV PYTHON_JULIAPKG_OFFLINE=yes

# # Install jluna as julia 
# WORKDIR /root
# RUN git clone https://github.com/clemapfel/jluna.git
# WORKDIR /root/jluna/build
# RUN cmake .. 
# RUN make install -j

WORKDIR /root/colcon_ws

