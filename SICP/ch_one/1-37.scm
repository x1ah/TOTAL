;;; a)
;;;

(define (cont-frac n d k)
  (if (= k 0) (/ n d)
    (/ n (+ d (cont-frac n d (- k 1)))))
  )

;;; 结果逼近黄金分割率
;;;
;;;
;;; iter
;;;
(define (cont-frac-iter n d counter max-count product)
  (if (> counter max-count) product
    (cont-frac-iter n d (+ counter 1) max-count (/ n (+ d product))))
  )

(define (cont-frac-fast n d k)
  (cont-frac-iter n d 1 k (/ n d)))
