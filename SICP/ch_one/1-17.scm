(define (even? n)
  (= (remainder n 2) 0))

(define (halve x)
  (/ x 2))

(define (double x)
  (* x 2))

(define (fast-mul a b z)
  (cond ((or (= a 0) (= b 0)) z)
        ((even? a) (fast-mul (halve a) (double b) z))
        (else (fast-mul (- a 1) b b))))

(define (fast-mmull a b)
  (fast-mul a b 0))
