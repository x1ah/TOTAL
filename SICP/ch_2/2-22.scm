;;; 第一个先进后出，一直堆上去，最后进的在最前面
;;; 第二个 cons 的参数第一个为 list，第二个为数，无法合并为一个纯数字列表。
;;;

(define (square-list items)
  (define (iter things answer)
    (if (null? things) answer
      (cons (* (car things) (car things))
            (iter (cdr things) answer))))
  (iter things (list )))

