## 一，设计目标
用新学的Qt开发一个与老式计算器一样的仿真计算器。
## 二，简要功能分析及技术分析
首先，作为一个仿真计算器，其外观得要与真实的计算器差不多，所以要有屏幕，按钮，这可以使用qt的ui界面编辑，屏幕用QLabel,按键用QPushButton。
	其次，老式真实的计算器按钮可分为数字的输入，运算符的输入。其中数字的输入显示与屏幕，运算符则不然，当按下‘=’按钮是输出结果。技术实现可以让按钮点击时绑定不同对应的事件。其中事件运用qt中的槽函数。
	最后，老式计算器还有一个时间按钮，点击时屏幕会显示当前时间。但为了能够运用到定时器的功能，就可以将该功能抽离出来，让时间实时显示与另一个屏幕。
## 三，功能截图
1. 时间显示
![1.png](https://upload-images.jianshu.io/upload_images/21680686-18d2e45f37826fa8.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
2. 屏幕显示
![2.png](https://upload-images.jianshu.io/upload_images/21680686-11ec979d5d6f61cc.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
3. 按钮
![3.png](https://upload-images.jianshu.io/upload_images/21680686-258d795cce8c04ea.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)
## 三， 总结
实现方面：本程序实现简单，没有涉及比较困难的算法。UI也是借助工具直接绘制而成的。
缺点：功能简单，没有运算符的优先考虑，如当进行3+2*5的时候，它会先计算3+2=5，再进行5*5 = 25。当然这也是老式计算器的特点之一。
---
代码地址：https://github.com/Teskinfly/OldCaculator

