FROM ubuntu:latest

RUN apt-get -y update
RUN apt-get install -y clang cmake

COPY . /app

RUN chmod +x /app/run.sh

WORKDIR /app/build
