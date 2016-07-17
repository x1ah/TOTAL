(load "1-21.scm")

(define (timed-prime-test n)
  (newline)
  (display n)
  (start-prime-test n (runtime)))

(define (start-prime-test n start-time)
  (if (prime? n)
    (report-prime (- (runtime) start-time))))

(define (report-prime elapsed-time)
  (display " *** ")
  (display elapsed-time))

;;; +--------------------------------+
;;; |     can't find (runtime)       |
;;; +--------------------------------+

(define (search-for-primes n curr-count max-count)
  (cond ((= curr-count max-count) (display "all done."))
        ((prime? n)
         (display n)
         (newline)
         (search-for-primes (+ n 2) (+ curr-count 1) max-count))
        (else
          (search-for-primes (+ n 2) curr-count max-count))))

(define (time-test n count)
  (start-test n count (runtime)))

(define (start-test n count start-time)
  (search-for-primes n 0 count)
  (report (- (runtime) start-time)))

(define (report-time elapsed-time)
  (display " *** ")
  (display elapsed-time))
