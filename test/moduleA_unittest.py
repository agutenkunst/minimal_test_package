import unittest
from minimal_test_package.moduleA import ModuleA

class TestModuleA(unittest.TestCase):
    def test(self):
        a = ModuleA()
        self.assertTrue(a.return_true())
        return

if __name__ == '__main__':
    unittest.main()
