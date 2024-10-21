   # 📖 LibFT | 42
   ## Project Overview
   LibFT is the first project in [42](https://www.42sp.org.br/)'s common core. 
   This project involves creating a comprehensive library of essential C functions that will be utilized in subsequent projects. Many of these functions are reimplementations of C standard library functions.
   
   ![approved-125%](https://github.com/user-attachments/assets/d2b2c0cc-d5d4-47dc-9907-813af2dccdc2) 
   [![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
   
   ##  Requirements
   ### 🚀Mandatory 
   
   For the mandatory part there are some basic files that need to be submitted:
   | **.c** | **.h** | **Makefile** |
   | ------ | ------ | ------------ |
   | These contain the code written in C, i.e. the functions. | The header file contains the declarations for all of the LibFT functions, and can be used by adding the #include directive in a .c file. | Specifies how to compile the .c functions and header in order to build the final executable.  | 
   
   ### 🌟Bonus
   
   The **bonus part** requires the implementation of some extra functions to deal with linked lists and the declaration of a struct to define it.

   ```c
   typedef	struct	s_list
   {
	void		*content;
	struct	s_list	*next;
   }			t_list;
  ```
