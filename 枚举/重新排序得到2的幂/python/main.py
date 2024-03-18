from typing import List


class Solution:

    def get_num(self, n: int) -> List:
        ans = [0] *10
        while n != 0:
            ans[n % 10] += 1
            n = n // 10
        return ans

    def reorderedPowerOf2(self, n: int) -> bool:
        bits1 = self.get_num(n)
        length1 = len(str(n))
        index = 1
        while True:
            length2 = len(str(index))
            if length2 > length1:
                break
            elif length2 == length1:
                bits2 = self.get_num(index)
                flag = True
                for i in range(10):
                    if bits1[i] != bits2[i]:
                        flag = False
                        break
                if flag:
                    return True
            index *= 2
        return False


if __name__ == '__main__':
    pass
