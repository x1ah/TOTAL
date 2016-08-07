(define (reverse-iter in-list out-list)
  (cond ((null? in-list) out-list)
        ((pair? (car in-list)) (reverse-iter (cdr in-list) (cons (reverse (car in-list)) out-list)))
        (else (reverse-iter (cdr in-list) (cons (car in-list) out-list)))))

(define (deep-reverse lis)
  (reverse-iter lis (list )))
