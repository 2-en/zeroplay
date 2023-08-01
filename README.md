# Zeroplay
The Zeroplay project has the goal of creating an AI agent with these properties:
1. Can complete (any%) every video game in Wikipedia's [List of video games considered the best](https://en.wikipedia.org/wiki/List_of_video_games_considered_the_best),
2. Can do this with zero-shot learning (not trained on the listed games themselves)
3. And can execute on widely available, retail hardware (latest MacBook)

## Sequence
1. A model to map controller screenshots to controller inputs
2. A program to map a sequence of video screenshots to time series controller inputs
3. A dataset of (screenshot,time)->input mappings collected from various games
4. Past-masking to generate unsupervised training data (it it now a transformer)?
5. Zeroplay: Zero-shot completion of video game canon on retail hardware
