## 622. Design Circular Queue 01

此题注意几点，为什么我们不用head 和 tail 而非要用 tail和size去推算head呢，这是因为会出现enqueue之后我们只动tail而无head的情况，然后我们去front就会出错，这样需要更多判断。如果只用tail的话我们则不需要太多去考虑维护的。

(tail_ - size_ + k_ + 1) % k_ 加个k_就不存在负数的情况了，很巧妙

## 752. Open the Lock 01

这就是一个BFS的最短路径问题，我们这里设置一个hashmap,先构建出deadends，其实这个映射就是添加一个flag，不可走和经过后的点，那就肯定不是target，我们不必再走回头路，所以每次先判断是否是，如果不是设置为1表示我们走到这了，每次就是8种方式的转锁变换，我们添加入栈作为外围继续前进，每一维就是一个step.

## 279. Perfect Squares 01 BFS

这道题也是很明显的一道最短路径问题，利用BFS模板即可，和752差不多，每次只是去减去一个平方数操作。