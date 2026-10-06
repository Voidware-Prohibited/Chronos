<h1 align="center">Chronos</h1>
<p align="center">
     <b>Seize The Day</b>
</p>

<p align="center">
<img src="Chronos.png" alt="Chronos">
</p>
<p align="center">
     <i>pre-alpha</i>
</p>

<p align="center">
     <a href="https://github.com/Voidware-Prohibited/Chronos/commits/master"><img src="https://img.shields.io/github/last-commit/Voidware-Prohibited/Chronos.svg?logo=forgejo&logoColor=white" alt="Last commit"></a>&nbsp;
     <a href="https://github.com/Voidware-Prohibited/Chronos/commits/master"><img src="https://img.shields.io/github/check-runs/Voidware-Prohibited/Chronos/stable?logo=forgejo&logoColor=white&label=CI" alt="CI"></a>&nbsp;
     <a href="https://github.com/Voidware-Prohibited/Chronos/commits/master"><img src="https://img.shields.io/github/checks-status/Voidware-Prohibited/Chronos/stable?logo=forgejo&logoColor=white" alt="Checks Status"></a>&nbsp;
     <a href="https://github.com/Voidware-Prohibited/Chronos/commits/master"><img src="https://img.shields.io/codecov/c/github/Voidware-Prohibited/Chronos/stable?logo=codecov&logoColor=white" alt="Coverage"></a>&nbsp;
</p>
<p align="center">
     <a href="https://github.com/Voidware-Prohibited/Chronos/issues"><img src="https://img.shields.io/github/issues-raw/Voidware-Prohibited/Chronos.svg?logo=forgejo&logoColor=white" alt="Issues"></a>&nbsp;
     <a href="https://github.com/Voidware-Prohibited/Chronos/pulls"><img src="https://img.shields.io/github/issues-pr-raw/Voidware-Prohibited/Chronos.svg?logo=forgejo&logoColor=white" alt="Pull requests"></a>&nbsp;
     <a href="https://github.com/Voidware-Prohibited/Chronos/blob/master/LICENSE"><img src="https://img.shields.io/badge/VOIDWARE%20Dual%20License-silver?style=flat&logo=unlicense&logoColor=white&label=License&color=white" alt="VOIDWARE Dual License"></a>
</p>
<p align="center">
     <a href="https://github.com/sponsors/colorindarkness"><img src="https://img.shields.io/github/sponsors/colorindarkness.svg?logo=github&logoColor=white" alt="Become a Sponsor"></a>&nbsp;
     <a href="https://www.patreon.com/colorindarkness"><img src="https://img.shields.io/endpoint.svg?url=https%3A%2F%2Fshieldsio-patreon.vercel.app%2Fapi%3Fusername%3Dcolorindarkness%26type%3Dpatrons" alt="Become a Patron"></a>&nbsp;
     <a href="https://ko-fi.com/colorindarkness"><img alt="Support me on Ko-fi" src="https://img.shields.io/badge/support_me_on-Ko--fi-red?link=https%3A%2F%2Fko-fi.com%2Fcolorindarkness"></a>&nbsp;
     <a href="https://liberapay.com/colorindarkness"><img alt="Support me on Liberapay" src="https://img.shields.io/badge/support_me_on-liberapay-yellow?link=https%3A%2F%2Fliberapay.com%2Fcolorindarkness%2F"></a>
</p>

> [!NOTE]
> Following the acquisition of GitHub by Micro$lop, we have taken principled action and have begun primarily hosting code and content on [Codeberg](https://codeberg.org/Voidware-Prohibited/). Mirrors will still be maintained on [GitHub](https://github.com/Voidware-Prohibited/Chronos/) and [GitLab](https://gitlab.com/Voidware-Prohibited/Chronos/).


A Customizable, data-driven, in-game, multiplayer Calendar, Time and Event System. Sequence Environmental Appearance, Curve Data and Events over a Day or any period.

Chronos is a part of the [Target Vector](https://github.com/Voidware-Prohibited/TargetVector/) framework.

[🌐Site](https://chronos.voidwarex.com/) • [📚Wiki](../../wiki/) • [📘Documentation](https://chronos.voidwarex.com/docs/) • [📑Chronos Notion](https://chronos.notion.site/2be59e501e7a4bf583437d1636bc7f2f?v=ac361eb5a6a14081892ff9a68e3e7a44/) • [🐤Twitter](https://x.com/Chronos/) • [🗨️Discord](discord://colorindarkness/)

# Introduction
Immerse the player in your games lore-accurate calendar and time system. From a Blistering Midday Sun to a Stormy Winter Evening; Drive engrossing Environmental details with your story.

# Features

> [!WARNING]
> _Chronos is under heavy development, including a rewrite to utilze GAS, Modular features and new technologies. Many features may not be finished or production-ready. Use at your own risk._

- Calendar Asset - Define _x_ Months per Year, _y_ Days per Month 1 Week 1, _z_ Days per Month 1 Week 2...
- DayTime Asset - Define _x_ Hours per day, _y_ Minutes per Hour, _z_ Seconds per Minute.
- Define different DaySequences for any number of yearly Phases (ie Seasons).
- Data Asset-oriented - Save Calendars and Day structures as Data Assets.
- Map Curves to Calendars - For use in Temparature Ranges (Vector), Average Humidity (Float) etc.
- Time Scale/Time Dilation
- Trigger Events at Specific Times, at a Percentage of a Time Range, on a New Day/Week/Month/Year etc.
- Write Data to a Material Parameter Collection.

**Tools**
- Automated Test sample(s).
- Workflows for Forgejo. Codeberg, Github and Gitlab.
- Scripts for Convenience, CI and Automation.

# Goals
- Provide a Customizable, Multiplayer Date Time System.
- Provide a Robust, Data-Oriented Event System.
- Adhere to, promote and facilitate adherance to the [Epic C++ Coding Standards for Unreal Engine](https://dev.epicgames.com/documentation/en-us/unreal-engine/epic-cplusplus-coding-standard-for-unreal-engine) and [Gamemakin UE5 Style Guide](https://github.com/Allar/ue5-style-guide/tree/v2)

[Organizational Ethos](https://voidwarex.com/About/Ethos)

# System Requirements
- Unreal Engine 5.7 or later
- Windows 10 (or later) or Linux (Tested on Debian).

# Dependencies

## Engine Plugins
The following are built-in Engine plugins that are enabled in the Plugins window. Note: some Plugins may be Experimental or Beta software.
- [DaySequence](https://dev.epicgames.com/documentation/unreal-engine/day-sequence-time-of-day-plugin-for-unreal-engine?application_version=5.8&lang=en-US)

## Compiling from Source Code Requirements
Included Workflows feature Cross-compilation to target both Windows and Linux from a Windows host.

- A working UE5 C++ Integrated Developement Environment(IDE)
     - Tested: Jetbrains Rider, VS Code, Visual Studio (Windows)
     - Untested: XCode (MacOS), Jetbrains Rider, VS Code, Visual Studio (Linux)
- clang -20 13.0.1

# Installation

## Fab Plugin Installation
_Not available on Fab. Please perform Manual Installation_

## Manual Installation

### Latest Release
_No Releases yet. Plesae Compile From Source Code_

1. Install and setup all [dependencies](#Dependencies) (if required).
2. Download Latest Release from [Releases](Chronos/tags/latest).
3. Unzip to your project `Plugins` folder.
4. (Re)Start Unreal Engine Editor.

### Compile From Source Code

#### Quick Installation

1. Install and setup all general [dependencies](#Dependencies) (if required).
2. Clone/download Chronos into your projects Plugin folder.
3. (Re)Build Plugin with the `BuildPlugin.bat` Script or (Re)Build Project normally with your IDE.
4. Once compilation is successful you can now begin using Chronos in your project

[View All Available Scripts](#Available-Scripts)

#### Full Installation
[Full Installation Instructions](../..//wiki/Installation/) are available in the [Chronos Wiki](../..//wiki/Installation/)

# Getting Started
To view a working demonstration simply load the `L_Chronos` level in the `/Levels` folder. The Demo Widget will allow you to adjust parameters in Realtime.

To integrate Chronos into a new or existing Game State, some setup is required:

1. Add ChronosGameStateComponent to your Game State
2. Add ChronosGameStateInterface to your Game State
3. Implement ChronosGameStateInterface functions in your Game State
4. Configure ChronosGameStateComponent

The full [Getting Started guide](../..//wiki/GettingStarted/) is available in the [Chronos Wiki](../..//wiki/GettingStarted/)

**Content Overview**
```
(root)/                                # Demo Game Mode and Game State
├──Components/ 
    ├── ChronosGameStateComponent      # Game State Component.
├──Interfaces/ 
    ├── ChronosGameStateInterface      # Game State Interface.
├──Data/                               
    ├── Calendar                       # Sample Calendar Data Assets.
    ├── DayTime                        # Sample DayTime Data Assets.
    ├── Curves                         # Sample Data Curves.
    ├── MPC                            # Material Parameter Collection.
├──Characters/                         # Demo ChronosCharacter Class.
    ├── Input                          # ChronosCharacter Input.
├──Levels/                             # Demo Level(s).
```

## Chronos Game State Component
Manages the replicated progression of Time and the Calendar, launches bound Events and outputs data.

## Chronos Game State Interface
Provides easy access to Chronos data from anywhere the Game State is available.

## Material Parameter Collection
The ChronosGameStateComponent can be configured to write Parameters to a Material Parameter Collection for use in Materials.

# Settings
Chronos is designed to be extremely configurable with Data Assets.

## Chronos Game State Component

### Material Parameter Collection
#### Data Source
Select Data Source type: Curve
#### Data Source Parameter
Select which channel to read
#### MPC Output Parameter
Select which MPC Parameter to write to

## Chronos Game State Interface

## Calendar Asset

## DayTime Asset

## Phases

## Curves

## Time Scaling

## Events

# CI
To encourage and facilitate the adoption of CI, this project is preconfigured for CI with the Workflows and Scripts below.

## CI System Requirements
Systems performing Continous Intergration Workflows will have additional requirements depending on the CI solution used.
- Git
- OpenCppCoverage
- Domain Name or ngrok (For Self Hosted CI)
- Workflow Actions services and Runners configured for Forgejo/Codeberg, GitHub or GitLab
- Jenkins and Java 11 (For Jenkins)

## Workflows
CI workflow YAML files are included for Forgejo/Codeberg, GitHub and GitLab. 

`ue-plugin-ci` Build, Test, Code Coverage, Upload to Codecov, Update Changelog, Update Status. Activated with any push.
`ue-plugin-ci-release` Build, Cook, Package, Test, Code Coverage, Upload to Codecov, Update Changelog, Update Status. Activated the a `v*` tag in the commit.
`changelog` Generates and commits CHANGELOG.md. Activated the a `v*` tag in the commit.

## Available Scripts
Batch(Windows) and Shell(Linux) scripts are included for convenience and automation.

- `./BuildPlugin.bat` - Build Plugin Batch Script
- `./BuildPlugin.sh` - Build Plugin Shell Script
- `./RunAutomatedTests.bat` - Run Automated Tests Batch Script
- `./RunAutomatedTests.sh` - Run Automated Tests Shell Script

## Automated Testing
The provided tests can be run in an Action Workflow or run manually with RunUAT. Learn more about Unreal Engine Automated Testing in the [Run Automated Tests](https://dev.epicgames.com/documentation/unreal-engine/run-automation-tests-in-unreal-engine?lang=en-US) documentation.

- `ChronosTest`

## Code Coverage
OpenCodeCoverage will perform Code Coverage analysis and publish and XML file as a Commit Artifact, and can optionally be uploaded to a configured Codecov account. You will need to first generate an Access Token from your Codecov account and add it your Forgejo/Codeberg, GitHub or GitLab Secrets as `CODECOV_TOKEN`.

# Contributions
Contibutors and PRs are very welcome! If you wish to contribute, please follow [CONTRIBUTING](docs/CONTRIBUTING.md) to get started.

# License

This project is dual-licensed. It is available for absoultely free under the [MIT License](LICENSE.md) for most Individuals and Organizations. If your organization, industry or application is listed in the [Commercial License](LICENSE-Commercial.md), please [Contact Us](https://voidwarex.com/contact/).

Any git submodules are covered by their respective licenses. Content listed in the Attributions are covered by their respective licenses.

# Attributions
Please view [ATTRIBUTIONS](ATTRIBUTIONS.md)

# Special Thanks
