(define (same-parity fis . w)
  (define (yes? n)
    (= (remainder n 2) (remainder fis 2)))
  (filter yes? w))
