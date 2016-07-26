(load "square.scm")

(define (tan-cf-foo x k count)
  (if (< k count) (/ (square x) (- (* 2 count) 1))
    (/ (square x) (- (- (* 2 count) 1) (tan-cf-foo x k (+ count 1))))
  ))

(define (tan-cf x k)
  (/ (tan-cf-foo x k 1) x))
