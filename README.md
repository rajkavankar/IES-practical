# IES PRACTICAL 1

## Download keil C51 [Click here](https://www.keil.com/demo/eval/c51.htm#!#DOWNLOAD "Download here")

**Steps For creating project**

---

1. Click on project on taksbar and select new microvision project 1st option

2. Choose a desired location

3. Search and select **AT89C51**

4. Project_folder->Target-1->Source group 1 **right click on Source group 1**

5. Choose _Add new item to group Source group 1_

6. Selce **C file** And give it a name

7. LED blinking C program [click here](1-blinking_LED.C)

8. Press **F7 key** to Debug

9. Press **Ctrl + F5** to enter debug mode

10. For output got to _Peripherals->I/O Ports->Port 1_ because

```C
 P1 = 0x00;
```

11. Press **F5** to start blinking
