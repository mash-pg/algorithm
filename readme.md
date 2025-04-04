# dockerの起動

``` bash
docker-compose up -d 

docker exec -it my-mysql-db bash

mysql -u root -p

```

# dockerのキャッシュ削除

``` bash
docker-compose down -v
``` 

# init.sqlでdocker起動時に権限付与の設定ができる

``` sql
GRANT CREATE ON *.* TO 'user'@'%';
CREATE USER 'root'@'%' IDENTIFIED BY 'password';
GRANT ALL PRIVILEGES ON *.* TO 'root'@'%' WITH GRANT OPTION;
FLUSH PRIVILEGES;
``` 

# github設定 
``` bash
git config --global user.name "Your Name"
git config --global user.email "your-email@example.com"
```

# ソースをもらう
``` bash
 git pull origin main
 git pull --rebase origin main
``` 
# NOTIONで環境構築の設定管理を実施する
 github設定（ソース管理）
 docker設定（docker起動で環境汚し対策）
 winscp設定（仮想環境とのフォルダ移動）

# winscp下記コマンド実行後に設定。
 ``` bash
  sudo service ssh restart
 ```