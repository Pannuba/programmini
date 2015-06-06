import praw
r = praw.Reddit(user_agent = 'testing bot')
r.login('Pannuba', 'P')
r.send_message('Pannuba', 'bot testing', 'hello world!')