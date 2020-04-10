
def hanoi(n,src,mid,tar):
	if n ==1:
		print("%d -> %d" % (src, tar))
	else:
		hanoi(n-1,src,tar,mid)
		hanoi(1,src,mid,tar)
		hanoi(n-1,mid,src,tar)
		

hanoi(4,1,2,3)
