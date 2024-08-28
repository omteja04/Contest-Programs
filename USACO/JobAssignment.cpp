/**
 * Author: omteja04
 * Created on: 24-08-2024 18:50:17
 * Description: JobAssignment
 **/

/*
Let there be N workers and N jobs. Any worker can be assigned to perform any job,
incurring some cost that may vary depending on the work-job assignment.
It is required to perform all jobs by assigning exactly one worker to each job and
exactly one job to each agent in such a way that the total cost of the assignment is minimized.

N <= 20


 */
#include <iostream>
#include <vector>
std::vector<std::vector<int>> cost;
std::vector<std::vector<int>> dp;

int memo(int job, int mask, int &n) {
    if (job == n) {
        return 0;
    }
    if (dp[job][mask] != -1)
        return dp[job][mask];

    int ans = INT_MAX;
    for (int worker = 0; worker < n; worker++) {
        // Available
        if (mask & (1 << worker)) {
            // off the current bit
            ans = std::min(ans, cost[worker][job] + memo(job + 1, mask ^ (1 << worker), n));
        }
    }
    return dp[job][mask] = ans;
}
int main() {
    int n;
    std::cin >> n;
    int jobs, workers;
    jobs = workers = n;

    cost = std::vector<std::vector<int>>(workers, std::vector<int>(jobs));
    for (int i = 0; i < workers; i++) {
        for (int j = 0; j < jobs; j++) {
            std::cin >> cost[i][j];
        }
    }
    // for (int i = 0; i < workers; i++) {
    //     for (int j = 0; j < jobs; j++) {
    //         std::cout<< cost[i][j];
    //     }
    //     std::cout << std::endl;
    // }

    dp = std::vector<std::vector<int>>(21, std::vector<int>(21, -1));

    std::cout << memo(0, (1 << n) - 1, n);
}