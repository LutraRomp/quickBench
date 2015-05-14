      PROGRAM matMult

      real*8 a(100,100),b(100,100)
      real*8 c(100,100)
      real*8 sum

      integer*8 i,j,k
      integer*8 n

      do i=1,100
        do j=1,100
          a(i,j)=i+j*100
          b(i,j)=i*100+j*1.31
        enddo
      enddo 

      do n=1,1000
        do i=1,100
          do j=1,100
            c(i,j)=0.0
          enddo
        enddo
        do i=1,100
          do j=1,100
            sum=0.0
            do k=1,100
              sum=sum+a(i,k)*b(k,j)
            enddo
            c(i,j)=sum
          enddo
        enddo 
      enddo

      do i=1,20
          write(*,*) c(i,i)
      enddo

      end
