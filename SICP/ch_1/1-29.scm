(define (cube x)
  (* x x x))


(define (even? n)
  (= (remainder n 2) 0))

(define (simpson f a b n)

  (define h (/ (- b a) n))

  (define (y k) (f (+ a (* h k))))

  (define (factor k)
    (cond ((or (= k 0) (= k n)) 1)
          ((even? k) 2)
          (else 4)))

  (define (term k)
    (* (factor k) (y k)))

  (define (next k)
    (+ k 1))

  (if (not (even? n))
    (error "n can't be odd")
    (* (/ h 3)
       (sum term (exact->inexact 0) next n))))

(define (sum term a next b)
  (cond ((> a b) 0)
        ((+ (term a) (sum term (next a) next b)))))
