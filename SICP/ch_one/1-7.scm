(load "abs.scm")

(define (good-enough? guess x)
  (/ (abs(- guess x)) x))
