(load "2-2.scm")
(load "../lib/abs.scm")

;;; 两条线段
;;; 四个点
(define (make-rectangle seg1 seg2)
  (cons seg1 seg2))

(define (length-rectangle a)
  (abs (- (car (start-segment (car a))) (car (end-segment (car a))))))

(define (width-rectangle a)
  (abs (- (car (start-segment (cdr a))) (car (end-segment (cdr a))))))

(define (perimeter-rectangle a)
  (let ((length (length-rectangle a))
        (width (width-rectangle a)))
    (* 2 (+ length width))))

(define (area-rectangle a)
  (let ((length (length-rectangle a))
        (width (width-rectangle a)))
    (* length width)))


