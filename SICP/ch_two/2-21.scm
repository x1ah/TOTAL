(define (map proc items)
  (if (null? item) (list )
    (cons (proc (car items))
          (map proc (cdr items)))))

(define (square-list items)
  (if (null? items) (list )
    (cons (* (car items) (cat items)) (square-list (cdr items)))))

(define (square-list items)
  (map (lambda (x) (* x x)) items))
