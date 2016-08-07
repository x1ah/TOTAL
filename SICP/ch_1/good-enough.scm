(load "square.scm")
(load "abs.scm")

(define (good-enough? guess x)
  (< (abs (- (square guess) x)) 0.001))
