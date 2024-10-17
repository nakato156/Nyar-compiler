docker build -t "nyarch" .
$idCont = docker run -d -t "nyarch"
docker exec -it $(idCont) sh