FROM ubuntu:latest

RUN apt-get -y update
RUN apt-get install -y \
    clang cmake libcpprest-dev libssl-dev \
    gdb gdbserver openssh-server rsync

RUN mkdir /run/sshd

COPY . /app

RUN chmod +x /app/run.sh

WORKDIR /app/build

RUN useradd -ms /bin/bash dev
RUN echo 'dev:dev' | chpasswd

CMD ["/usr/sbin/sshd", "-D"]
