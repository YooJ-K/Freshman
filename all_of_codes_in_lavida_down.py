from selenium import webdriver
from selenium.webdriver.common.keys import Keys
import time
from bs4 import BeautifulSoup
import pyperclip

chrome_path = "chromedriver"
url_login = "https://lavida.us/index.php"
url_submit = "https://lavida.us/status.php?&user_id=20183172&jresult=4"

driver = webdriver.Chrome(chrome_path)
driver.get(url_login)
time.sleep(1)

# id, pw 입력할 곳을 찾기
tag_id = driver.find_element_by_name('user_id')
tag_pw = driver.find_element_by_name('password')
tag_id.clear()
tag_pw.clear()
time.sleep(1)

# id 입력
tag_id.click()
pyperclip.copy('20183172')
tag_id.send_keys(Keys.COMMAND, 'v')
time.sleep(1)

# pw 입력
tag_pw.click()
pyperclip.copy('2127732')
tag_pw.send_keys(Keys.COMMAND, 'v')
time.sleep(1)

# # 로그인
tag_pw.send_keys(Keys.ENTER)

#바로 하면 페이지 이동이 안될 수 있다.
time.sleep(3)

# submit page data 가져오기
driver.get(url_submit)


while True:
    driver.get(driver.current_url)
    links = driver.find_elements_by_link_text("C++11")
    links += driver.find_elements_by_link_text("C")

    if len(links) == 0:
        break
    
    for link in links:
        link.click()

        # 새페이지로 switch
        driver.switch_to.window(driver.window_handles[-1])
        driver.get(driver.current_url)

        # 페이지 소스 가져오기
        html = driver.page_source

        # soup에 넣어주기
        soup = BeautifulSoup(html, 'html.parser')
        code = soup.textarea.text

        file_name = soup.find_all('td')[1].text + '.c'

        file = open('lavida.us/' + file_name, 'w')
        for line in code:
            file.write(line)
        file.close()

        driver.close()

        driver.switch_to.window(driver.window_handles[0])
        time.sleep(3)

    driver.find_element_by_class_name("btn.btn-info").click()

driver.quit()