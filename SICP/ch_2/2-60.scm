(define (element-of-set? x set)
  (cond ((null? set) #f)
        ((equal? x (car set)) #t)
        (else (element-of-set? x (cdr set)))))

(define (adjoin-set x set)
  (cons x set))

(define (intersection-set-iter set1 set2 res)
  (cond ((or (null? set1) (null? set2)) res)
        ((and (element-of-set? (car set1) set2)
             (not (element-of-set? (car set1) res)))
             (intersection-set-iter (cdr set1) set2 (cons (car set1) res)))
        (else (intersection-set-iter (cdr set1) set2 res))))

(define (intersection-set set1 set2)
  (intersection-set-iter set1 set2 '()))

(define (union-set set1 set2)
  (cond ((null? set1) set2)
        ((null? set2) set1)
        (else (cons (car set1) (union-set (cdr set1) set2)))))
