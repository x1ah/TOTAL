(define (reverse-iter in-list out-list)
  (if (null? in-list) out-list
  (reverse-iter (cdr in-list) (cons (car in-list) out-list))))

(define (reverse lis)
  (reverse-iter lis (list )))
