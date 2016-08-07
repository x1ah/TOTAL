(load "good-enough.scm")
(load "improve.scm")

(define (new-if pre then els)
  (cond (pre then)
        (else els)))

(define (sqrt-iter guess x)
  (new-if (good-enough? guess x)
          guess
          (sqrt-iter (improve guess x) x)))
;;;无限递归。引用"习题集"，new-if 为普通函数，在调用时，每个实参都会进行求值，所以造成了无限递归的情况。
