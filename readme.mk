#dockerの起動
docker-compose up -d 

docker exec -it my-mysql-db bash

mysql -u root -p

#dockerのキャッシュ削除
docker-compose down -v

#init.sqlでdocker起動時に権限付与の設定ができる
GRANT CREATE ON *.* TO 'user'@'%';
CREATE USER 'root'@'%' IDENTIFIED BY 'password';
GRANT ALL PRIVILEGES ON *.* TO 'root'@'%' WITH GRANT OPTION;
FLUSH PRIVILEGES;

#github設定 
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
test