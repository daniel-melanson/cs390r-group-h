# CS 390R: Group H

## Overview

Our group shares an interest in exploiting retro games. We watched some videos showcasing exploits done on
Zelda on the Nintendo 64 (N64) that leveraged arbitrary code execution by exploiting the heap and save file
names. This got us excited to attempt something similar.

We decided to focus on 007 Goldeneye for the N64. We were able to get the game running and attached to a
debugging environment. Coincidentally, we found a Github page with someone attempting to reverse engineer
the MIPS assembly to C. Although it is not fully reverse engineered, we were able to understand enough of the
game logic and found interesting functions that were helpful in our venture.

The original goal for the project was to see if there are any vulnerabilities in the code that we can use to our
advantage. Ideally, we would have liked to port similar exploits found in Zelda into Goldeneye. As we
progressed and delved deeper into the mechanics of Goldeneye, it became apparent that this was unlikely due
to the differences in each game. Using topics we learned in class, we were able to succeed in other ways such
as reverse engineering save files and implementing a fuzzer.

## Target

Our target is GoldenEye 007 developed for the Nintendo 64.

From the [Wikipedia page on GoldenEye 007](https://en.wikipedia.org/wiki/GoldenEye_007_(1997_video_game)):

> GoldenEye 007 is a 1997 first-person shooter video game developed by Rare and published by Nintendo for the Nintendo 64. Based on the 1995 James Bond film GoldenEye, the player controls the secret agent James Bond to prevent a criminal syndicate from using a satellite weapon.

Like a lot of N64 games, 007 has gathered a large community of [speed runners](https://rankings.the-elite.net/goldeneye). With the goal of completing levels as fast as possible, speed runners will spend hours analyzing game behavior to find glitches to improve their time. Some communities will go as far as dumping ROMs and attempting to construct decompiled source code.

## Plan

Using [this decompilation project](https://github.com/n64decomp/007), and a "legally" obtained ROM, our group attempted to find exploits that could lead to an arbitrary code execution exploit. Presentation slides can be found [here]() along with a full writeup [here]().

## Repository Structure

```
/                                   -- Presentation/Writeup files
007 Reversed Engineered Project/    -- Decompiled Source
Fuzzer/                             -- Fuzzer using Bizhawk API written in Lua/Python
Save File Manipulator/              -- Save File Manipulator written in C
```
## Authors

* [Daniel Melanson](https://github.com/daniel-melanson)
* [Stuart Lustig](https://github.com/slustig210)
* [Jared Dalkas](https://github.com/jbdalkas)
* [Jon Rubio](https://github.com/Osyki)

