# Auxiliary-tools-for-reading-foreign-languages
A auxiliary tools that for reading foreign languages electronic book at computer  can temp save foreign languages translate.

# 为什么写这个应用程序或者说这个程序与其他工具相比有什么优点

* 自己定制的这个程序可以有默认的字体大小，大小比较合适，不至于字体太小，另外字体可以方便地调节大小。
* 文本框的颜色设置为黑色，这样有利于保护眼睛。
* 当第一次把文本粘贴到文本框后，以后每次粘贴时只需要点击一下 `粘贴并整理` 按钮即可，不需要每次把之前的内容全部选中再粘贴，程序会自动处理这个过程，大大减少了需要重复执行的步骤。

# 应用程序介绍

这是用QT和C++写的一个简单的桌面程序，当你看电子版外文资料时，遇到不确定意思的段落(或者说自己翻译不通)的时候，利用Chatgpt翻译后，手动复制翻译后的意思，然后点击这个应用程序最上面的 `粘贴并整理` 按钮，即可把文本复制到文本框中，当下次有新的内容要粘贴到这个应用程序的文本框时，直接点击 `粘贴并整理` 按钮即可，不用手动清除文本框里原来的内容，当点击 `粘贴并整理` 按钮时，程序会替你先把文本框里现有的内容清除，然后把你本次复制到粘贴板的内容粘贴到文本框，文本框中只会显示当前粘贴板的内容。为了看起来更美观，应用程序已加入桌面图标。

# 本应用程序亮点

Windows系统里面的话，如果把复制的内容粘贴到记事本或其他文本编辑器时，好多文本编辑器会把所有的内容粘贴到一行，这样你看外文电子资料对应的翻译时，左右拖动文本编辑器的滑块左右看时非常不方便，本应用程序很好地解决了这个问题，使粘贴的内容自动适应本应用程序中文本框的宽度，不用再左右滑动滑块，方便对照着看外文资料和翻译的意思。

或许其他的文本编辑器可以根据文本框的宽度自动换行，但是或许字体太小的时候不能调节字体的大小，本应用程序可以方便地调节文本框中字体的大小，不至于长时间忍受字体过于小，眼睛感到酸痛。左上角有字体默认的大小，可以根据自己的需要进行相应的调节，可以直接在输入框输入合适的数字，有效数字范围为 1 - 99 ，当然也通过上下箭头按钮进行微调字体的大小。本程序兼顾文本框里的内容自动适应文本框的宽度进行自动换行和文本框里字体大小的调节。

另外可以根据自己的需要调节应用程序的窗口大小，同时文本框里的内容自动跟随着窗口进行换行以适应文本框的宽度。

# 应用程序适用平台

因为本应用程序是用QT开发的，QT编写的应用程序跨平台性很好，理论上WIndows，Mac，Linux上都能正常编译生成可执行程序。

目前已上传了编译好的Mac平台(`基于Intel芯片`)和Windows平台的可执行程序。当然也可以利用源码自己编译所需的可执行程序。

## NOTE:

本人的Intel芯片电脑上使用正常，苹果自己家芯片(M系列)的电脑使用者的话可能需要自己编译了，我本人只有Intel芯片的苹果电脑，所以没法编译出M系列芯片的可执行程序。

# 应用程序图片

## Mac平台下应用程序

![介绍](https://github.com/mkzpd/Auxiliary-tools-for-reading-foreign-languages/blob/main/picture/Screenshot-2.png)

## Windows下应用程序

![介绍](https://github.com/mkzpd/Auxiliary-tools-for-reading-foreign-languages/blob/main/picture/windows-picture.PNG)

# 使用方法

## mac平台下使用

![介绍](https://github.com/mkzpd/Auxiliary-tools-for-reading-foreign-languages/blob/main/picture/Screenshot-1.png)

## Windows平台下使用

![介绍](https://github.com/mkzpd/Auxiliary-tools-for-reading-foreign-languages/blob/main/picture/windows-picture-use.PNG)

# 个人使用感受

这样看外文资料，能在提高英语水平的时候还可以学到最新，最炫的知识。
