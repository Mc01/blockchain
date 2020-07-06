FROM ubuntu:latest

RUN apt-get -y update
RUN apt-get install -y clang

COPY . /app
WORKDIR /app

RUN chmod +x run.sh
