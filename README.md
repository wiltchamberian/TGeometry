# TGeometry
my geometry lib

this lib is a lightweight geometry library, it implement some basic ojbects in geometry,
such as point,vector,plane,straightline,segment and so on;
it also contain matrix for coordinate transformation;
we can use it to do some geometry operation such as intersect,move ojbect,rotate,dot;,cross,project,and so on
unlike other lib,it is lightweight,and concentrating on operation on geometry objects;
eigen is stronger much in matrix process,but complicate matrix operator are often not useful,
we often need simple low order matrix mulitply,matrix-vector mulitply and so on;this lib can affort them;
boost::geometry is more general,but it contrate on extension by users,usually users don't want
to implement their self geometry operations but just want a ready-made and easy to use lib,
it maybe a good choice!

这是一个轻量级的几何库，它实现了一些基本的几何元素，比如点，向量，平面，直线，线段等；
它也包含矩阵用来做坐标变换；我们可以用它做一些几何操作比如求交，移动对象，旋转，点乘，叉乘，投影等；
不像其它的几何库，它很轻，并且聚焦于关于几何对象的操作
eigen在矩阵处理方面强大的多，但是复杂的矩阵操作并不常用，通常来说我们只需要简单的低阶矩阵乘，矩阵向量乘法等；
那么这个库可以满足这些需求；
boost::geometry更通用，但是它聚焦于用户可以方便的拓展，通常来说用户不想自己实现几何操作而是只想要一个现成的
容易使用的库，那么它或许会是一个好的选择！
