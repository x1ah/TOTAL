(define items (list 1 3 (list 5 7) 9))
(car (cdr (cdr (cdr items))))

(define items (list (list 7)))
(car (car items))

(define items (list 1 (list 2 (list 3 (list 4 (list 5 (list 6 7)))))))
(car (cdr (cdr (cdr (cdr (cdr (cdr items)))))))
