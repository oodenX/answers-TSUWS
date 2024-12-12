#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cmath>

using namespace std;

// 三角形题目类
class TriangleProblem {
private:
    int problemId;        // 题目编号
    double a, b, c;       // 三边长
    double userAnswer;    // 用户答案
    double correctAnswer; // 正确答案
    string problemText;   // 题目描述

public:
    // 构造函数
    TriangleProblem(int id, double side1, double side2, double side3) 
        : problemId(id), a(side1), b(side2), c(side3), userAnswer(0) {
        problemText = "计算边长为 " + to_string(a) + ", " + to_string(b) + 
                     ", " + to_string(c) + " 的三角形面积:";
        correctAnswer = calculateArea();
    }

    // 计算三角形面积（海伦公式）
    double calculateArea() {
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // 设置用户答案
    void setUserAnswer(double answer) {
        userAnswer = answer;
    }

    // 判断答案是否正确（允许0.01的误差）
    bool isCorrect() const {
        return abs(userAnswer - correctAnswer) < 0.01;
    }

    // getter方法
    int getId() const { return problemId; }
    double getCorrectAnswer() const { return correctAnswer; }
    string getProblemText() const { return problemText; }
    double getUserAnswer() const { return userAnswer; }
};

// 题库类
class ProblemBank {
private:
    string bankName;
    vector<TriangleProblem> problems;
    vector<double> scores;
    double averageScore;

public:
    // 构造函数
    ProblemBank(const string& name) : bankName(name), averageScore(0) {}

    // 添加题目
    void addProblem(const TriangleProblem& problem) {
        problems.push_back(problem);
        scores.push_back(0); // 初始分数为0
    }

    // 删除题目
    bool removeProblem(int problemId) {
        for (size_t i = 0; i < problems.size(); i++) {
            if (problems[i].getId() == problemId) {
                problems.erase(problems.begin() + i);
                scores.erase(scores.begin() + i);
                updateAverageScore();
                return true;
            }
        }
        return false;
    }

    // 回答题目
    bool answerProblem(int problemId, double answer) {
        for (size_t i = 0; i < problems.size(); i++) {
            if (problems[i].getId() == problemId) {
                problems[i].setUserAnswer(answer);
                scores[i] = problems[i].isCorrect() ? 100 : 0;
                updateAverageScore();
                return true;
            }
        }
        return false;
    }

    // 更新平均分
    void updateAverageScore() {
        if (scores.empty()) {
            averageScore = 0;
            return;
        }
        double sum = 0;
        for (double score : scores) {
            sum += score;
        }
        averageScore = sum / scores.size();
    }

    // 显示所有题目
    void displayAllProblems() const {
        cout << "\n题库名称: " << bankName << endl;
        cout << "题目数量: " << problems.size() << endl;
        cout << "平均分数: " << fixed << setprecision(2) << averageScore << endl;
        cout << "\n题目列表:\n";
        for (size_t i = 0; i < problems.size(); i++) {
            cout << "\n题目 #" << problems[i].getId() << endl;
            cout << problems[i].getProblemText() << endl;
            if (problems[i].getUserAnswer() != 0) {
                cout << "你的答案: " << problems[i].getUserAnswer() << endl;
                cout << "得分: " << scores[i] << endl;
            }
        }
    }

    // 查询特定题目
    bool queryProblem(int problemId) const {
        for (const auto& problem : problems) {
            if (problem.getId() == problemId) {
                cout << "\n题目 #" << problem.getId() << endl;
                cout << problem.getProblemText() << endl;
                if (problem.getUserAnswer() != 0) {
                    cout << "你的答案: " << problem.getUserAnswer() << endl;
                    cout << "正确答案: " << problem.getCorrectAnswer() << endl;
                }
                return true;
            }
        }
        return false;
    }
};

int main() {
    // 创建题库
    ProblemBank bank("几何图形题库");

    // 添加一些题目
    bank.addProblem(TriangleProblem(1, 3, 4, 5));
    bank.addProblem(TriangleProblem(2, 5, 12, 13));
    bank.addProblem(TriangleProblem(3, 6, 8, 10));

    // 显示初始题库
    cout << "初始题库状态：" << endl;
    bank.displayAllProblems();

    // 回答一些题目
    bank.answerProblem(1, 6); // 正确答案约为6
    bank.answerProblem(2, 30); // 正确答案为30
    bank.answerProblem(3, 25); // 错误答案（正确答案约为24）

    // 显示答题后的题库状态
    cout << "\n答题后题库状态：" << endl;
    bank.displayAllProblems();

    // 删除一个题目
    bank.removeProblem(2);

    // 查询特定题目
    cout << "\n查询题目 #1 的信息：" << endl;
    bank.queryProblem(1);

    return 0;
}