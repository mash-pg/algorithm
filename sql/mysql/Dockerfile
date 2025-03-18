FROM mysql/mysql-server:8.0

# 必要なパッケージを追加
RUN microdnf install -y glibc-langpack-ja glibc-common langpacks-ja glibc-all-langpacks glibc-locale-source gzip \
    && microdnf clean all

# UTF-8のキャラクターマップを準備（重要）
RUN gzip -d /usr/share/i18n/charmaps/UTF-8.gz \
    && localedef -f UTF-8 -i ja_JP ja_JP.UTF-8

# ロケール環境変数を設定
ENV LANG ja_JP.UTF-8
ENV LC_ALL ja_JP.UTF-8

# MySQLの設定を追加（文字化け防止用）
RUN echo -e "[mysqld]\ncharacter-set-server=utf8mb4\ncollation-server=utf8mb4_unicode_ci" >> /etc/my.cnf
RUN echo -e "[client]\ndefault-character-set=utf8mb4" >> /etc/my.cnf
