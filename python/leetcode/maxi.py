class Solution:
    def minimumTeachings(self, n, languages, friendships):
        lang_sets = [set(l) for l in languages]
        need_fix = []
        for u, v in friendships:
            if not (lang_sets[u - 1] & lang_sets[v - 1]):
                need_fix.append((u - 1, v - 1))
        if not need_fix:
            return 0
        ans = float('inf')
        for lang in range(1, n + 1):
            teach = set()
            for u, v in need_fix:
                if lang not in lang_sets[u]:
                    teach.add(u)
                if lang not in lang_sets[v]:
                    teach.add(v)
            if len(teach) < ans:
                ans = len(teach)
        return ans
