# ForkSystemCall
Operating Systems: Basic Process Creation Through fork() System Call
Example output:
      $ gcc -o lab02 lab02.c
      $ strace -q -f -e trace=write ./lab02 15 2>err
      my child exited with code: 15
      $ cat log
      2015:03:23 22:34:51
      fib 15 = 610
      $ cat err
      [pid 23517] write(3, "2015:03:24 09:32:28\n", 20) = 20
      [pid 23517] write(3, "fib 15 = 610\n", 13) = 13
      --- SIGCHLD (Child exited) @ 0 (0) ---
      write(1, "my child exited with code: 15\n", 30) = 30
      $ ./lab02
      Usage: ./lab02 <number>
      $ echo $?
      1 
