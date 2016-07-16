(define (rec n)
  (cond ((< n 3) n)
        (else (+ (rec (- n 1)) (* 2 (rec (- n 2))) (* 3 (rec (- n 3)))))
        ))

(define (iter a b c n)
  (if (< n 3) a
    (iter (+ a (* 2 b) (* 3 c)) a b (- n 1))))

(define (iter-root n)
  (iter 2 1 0 n))
