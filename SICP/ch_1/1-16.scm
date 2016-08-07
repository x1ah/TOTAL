(load "square.scm")

(define (even? n)
  (= (remainder n 2) 0))

(define (quick-expt b n a)
  (cond ((= n 0) a)
        ((even? n) (quick-expt (square b) (/ n 2) a))
        (else (quick-expt b (- n 1) (* a b))))
  )

(define (fast-expt b n)
  (quick-expt b n 1))
