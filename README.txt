Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the Arrays Tutorial!
Prerequesites: Core C++ Intro

An "array" is a list of items. In this tutorial, we will show you
how to make a list, and how they can be used. Without arrays, if you
wanted to make 100 variables, you would have to do something like:

int number1;
int number2;
int number3;
...

Which woud take forever. With arrays, you can make a list:

int numbers[100];

We just made a list of 100 numbers, with only one line
