#!/bin/bash

docker build -t "nyarch" .
idCont=$(docker run -v ./:/TrabajoFinal/Github/ -d -t "nyarch")
docker exec -it $idCont sh