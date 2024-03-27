# windows查看端口占用情况

- 在cmd窗口执行 `netstat -ano`

    ```shell
    $ netstat -ano
    活动连接

      协议  本地地址          外部地址        状态           PID
      TCP    0.0.0.0:135            0.0.0.0:0              LISTENING       1108
      TCP    0.0.0.0:443            0.0.0.0:0              LISTENING       5104
      TCP    0.0.0.0:445            0.0.0.0:0              LISTENING       4
      TCP    0.0.0.0:623            0.0.0.0:0              LISTENING       3864
      TCP    0.0.0.0:902            0.0.0.0:0              LISTENING       3696
      TCP    0.0.0.0:912            0.0.0.0:0              LISTENING       3696
      TCP    0.0.0.0:5040           0.0.0.0:0              LISTENING       6352
      TCP    0.0.0.0:5357           0.0.0.0:0              LISTENING       4
      TCP    0.0.0.0:8680           0.0.0.0:0              LISTENING       17700
      TCP    0.0.0.0:16992          0.0.0.0:0              LISTENING       3864
      TCP    0.0.0.0:49664          0.0.0.0:0              LISTENING       940
      TCP    0.0.0.0:49665          0.0.0.0:0              LISTENING       836
      TCP    0.0.0.0:49666          0.0.0.0:0              LISTENING       1408
      .
      .
      .
    ```
