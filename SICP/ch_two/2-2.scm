(load "../lib/average.scm")

(define (make-segment x y)
  (cons x y))

(define (start-segment seg)
  (car seg))
(define (end-segment seg)
  (cdr seg))

(define (make-point x y)
  (cons x y))

(define (x-point point)
  (car point))

(define (y-point point)
  (cdr point))

(define (midpoint-segment seg)
  (let ((x (average (car (start-segment seg)) (car (end-segment seg))))
        (y (average (cdr (start-segment seg)) (cdr (end-segment seg)))))
    (make-point x y)))


(define (print-point p)
  (newline)
  (display "(")
  (display (x-point p))
  (display ",")
  (display (y-point p))
  (display ")")
  (newline))
