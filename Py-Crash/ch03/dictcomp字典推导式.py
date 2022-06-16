# BEGIN DIALCODES
# dial codes of the top 10 most populous countries
DIAL_CODES = [
    (86, 'China'),
    (91, 'India'),
    (1, 'United States'),
    (62, 'Indonesia'),
    (55, 'Brazil'),
    (92, 'Pakistan'),
    (880, 'Bangladesh'),
    (234, 'Nigeria'),
    (7, 'Russia'),
    (81, 'Japan'),
]  # 这个列表是由多个元组组成的

print(DIAL_CODES)
# 利用推导式来获取数据,看清楚各个变量是怎么摆的
country_code = {country: code for code, country in DIAL_CODES}  # 平行赋值
print(country_code)
country_code2 = {
    code: country.upper()
    for code, country in DIAL_CODES if code < 66
}
print(country_code2)
