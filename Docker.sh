#!/bin/bash

docker build -t "nyarch" .
idCont=$(docker run \
        -v ./:/TrabajoFinal/Github/ \
        -e DISPLAY=$DISPLAY \
        -v /tmp/.X11-unix:/tmp/.X11-unix \
        -d -t "nyarch")
docker exec -it $idCont sh