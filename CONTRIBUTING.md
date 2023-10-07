# Contributor's Guide

***You can follow the rules to start with your Contribution**.*
Please go through the guide at least once before you start contributing as it will help you understand the project, and how we work better.


## Commits 👮

Try and make small commits, it will be easier for us to review and merge them and also it will be easier for you to fix any errors if there are any.

#### Commit Message Format 🔐

The commit message should be in the format of `type(scope): subject` where the `scope` is optional `type` is one of the following:

- `feat` : Use this when you are adding a new feature.
- `fix` : Use this when you are fixing a bug.
- `docs` : Use this when you are adding documentation.
- `style` : Use this when you are changing the style of the code.
- `refactor` : Use this when you are refactoring the code.
- `test` : Use this when you are adding tests.
- `chore` : Use this when you are changing the build process or auxiliary tools and libraries such as documentation generation.


## Issues 👮


#### Creating an issue 📝

- There are different types in the issues section such as `Bug` , `Documentation` , `Feature` . You can choose, or create any of the types of issues.
- In case you need to create something else, you can use the `Other` type. Blank issues are not recommended at all.
- When creating an issue make sure you fill up the fields properly and also make sure that you are **not raising a duplicate issue.**
- The `labels` are used to categorize the issues and they will be automatically added based on the type of issue you are creating.


#### Working on an Issue 🛠️

- Only ask to be assigned 1 issue at a time.
- **Do not** enable GitHub Actions on your fork
- You can assign yourself to an issue if you want to work on it by checking the `I am willing to work on this issue (blank for no)` checkbox.
- In case someone else has left that box empty, you can assign yourself to that issue by commenting `I would like to work on this issue` on that issue.
- We assign on a **first come first serve basis**.


#### Closing an Issue 📌

- If you are the one who has created the issue and want to close it you can close it by yourself.
- If you are working on the issue, you can reference the issue in the pull request in `closes #issue_number` format & the issue will be closed automatically when the PR is merged.



#### Pull Request Title Format 🔐

🔴🔴🔴 **All LowerCase**

The title of the pull request should be in the format of `type(scope): subject` where the `scope` is optional `type` is one of the following:

Available types:

- `feat` : Use this when you are adding a new feature.
- `fix` : Use this when you are fixing a bug.
- `docs` : Use this when you are adding documentation.
- `style` : Use this when you are changing the style of the code.
- `refactor` : Use this when you are refactoring the code.
- `test` : Use this when you are adding tests.
- `chore` : Use this when you are changing the build process or auxiliary tools and libraries such as documentation generation.

**Examples:**

- `feat: customized icon for plates`
- `chore(refactor): remove unused dependencies
- `fix: updated broken link in the footer`


#### Reviewing a Pull Request 📌

We welcome everyone to review Pull Requests, it is a great way to learn and network.

##### DOs
- Be kind and respectful, we use inclusive, gender-neutral language (for example `they/them` instead of `guy/man`)
- Use inline comments to explain your suggestions
- Use inline suggestions to propose changes
##### DON'Ts
- Don't be rude, disrespectful or aggressive
- Do not repeat feedback, this creates more noise than value (check the existing conversation), use GitHub reactions if you agree/disagree with a comment
- Do not spam Pull requests/issues.


##### NOTE

- Make sure there are no `failed` checks in the pull request. If there are any failed checks, you can click on the `Details` button to see the logs and fix the errors.
- If the tests are failing due to some internal error on our side, **ignore it.**
- Merging and reviewing the PRs takes time, so please be patient.
