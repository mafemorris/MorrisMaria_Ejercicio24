import numpy as np
import matplotlib.pylab as plt

plt.figure()
MH = np.loadtxt('MH.dat')
plt.hist(MH)
plt.savefig('MH.png')